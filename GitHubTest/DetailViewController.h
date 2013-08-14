//
//  DetailViewController.h
//  GitHubTest
//
//  Created by Ricky Kleinhempel on 14.08.13.
//  Copyright (c) 2013 Ricky Kleinhempel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
