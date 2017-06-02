//
//  ViewController.h
//  DrawingApp
//
//  Created by Lavrin on 2/18/17.
//  Copyright © 2017 Lavrin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SettingsViewController.h"


@interface ViewController : UIViewController <UIActionSheetDelegate, SettingsViewControllerDelegate> {
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)erasorPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)settings:(id)sender;
- (IBAction)save:(id)sender;

@end

