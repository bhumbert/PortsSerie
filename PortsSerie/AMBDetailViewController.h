//
//  AMBDetailViewController.h
//  PortsSerie
//
//  Created by macBHServeurBis on 22/01/13.
//  Copyright (c) 2013 macBHServeurBis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AMBDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
