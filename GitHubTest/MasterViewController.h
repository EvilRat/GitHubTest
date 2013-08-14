//
//  MasterViewController.h
//  GitHubTest
//
//  Created by Ricky Kleinhempel on 14.08.13.
//  Copyright (c) 2013 Ricky Kleinhempel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
