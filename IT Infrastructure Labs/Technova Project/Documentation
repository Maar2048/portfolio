# Windows Server 2016 Lab: Enterprise Infrastructure Simulation
## Project Overview
This lab serves as the comprehensive capstone project for a Udemy course on Windows Server 2016 Administration. The goal was to design and deploy a functional IT infrastructure for a fictional startup, "TechNova," simulating real-world hardware constraints and administrative requirements.

## Tech Stack & Features
* Hypervisor: VirtualBox
* Operating Systems: Windows Server 2016 (Domain Controller), Windows 10 Pro (Client)
* Storage: Configured RAID 5 software array for redundant data storage.
* Network Services: AD DS: Structured Organizational Units (OUs) for HR, IT, and Management.
* DNS/DHCP: Automated IP assignment with specific reservations and DNS forwarders.
* Group Policy (GPO): Automated drive mapping, password complexity policies, and workstation environment lockdowns.

## Troubleshooting Case Study: The "Corporate Wallpaper" Issue
During the deployment, I encountered a significant roadblock while enforcing a corporate desktop wallpaper via Group Policy. Although the GPO was being applied, the wallpaper remained blank.
The client machines did not have the necessary permissions to access the local path on the server where the image was stored.
Furthermore, the initial file format was not being rendered correctly by the client’s Desktop Wallpaper engine.
The Solution:
I moved the image to a dedicated "Public" network share and granted the Domain Computers group "Read" permissions. Since the GPO is applied by the system, the machine account itself needed access to the file path.
I also converted the image to a .bmp format and this change immediately resolved the rendering issue on all client workstations.
