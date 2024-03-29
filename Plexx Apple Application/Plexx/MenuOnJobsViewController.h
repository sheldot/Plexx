//
//  MenuOnJobsViewController.h
//  Plexx
//
//  Created by Sheldon Trotman on 5/28/13.
//  Copyright (c) 2013 Sheldon Trotman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JobScreenViewController.h"

@interface MenuOnJobsViewController : UITableViewController
//- (IBAction)profileButton:(id)sender;
- (IBAction)jobsButton:(id)sender;
- (IBAction)skillsButton:(id)sender;
- (IBAction)aboutPlexxButton:(id)sender;
- (IBAction)privacyPolicyButton:(id)sender;
- (IBAction)reportBugButton:(id)sender;

@property (nonatomic) JobScreenViewController *parentViewController;
@end
