//
//  SettingsViewController.h
//  DrawingApp
//
//  Created by Lavrin on 2/18/17.
//  Copyright © 2017 Lavrin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end

@interface SettingsViewController : UIViewController <SettingsViewControllerDelegate>

@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;
@property CGFloat brush;
@property CGFloat opacity;
@property CGFloat red;
@property CGFloat green;
@property CGFloat blue;


@property (weak, nonatomic) IBOutlet UISlider *brushControl;
@property (weak, nonatomic) IBOutlet UISlider *opacityControl;
@property (weak, nonatomic) IBOutlet UIImageView *brushPreview;
@property (weak, nonatomic) IBOutlet UIImageView *opacityPreview;
@property (weak, nonatomic) IBOutlet UILabel *brushValueLabel;
@property (weak, nonatomic) IBOutlet UILabel *opacityValueLabel;
@property (weak, nonatomic) IBOutlet UISlider *redControl;
@property (weak, nonatomic) IBOutlet UISlider *greenControl;
@property (weak, nonatomic) IBOutlet UISlider *blueControl;
@property (weak, nonatomic) IBOutlet UILabel *redLabel;
@property (weak, nonatomic) IBOutlet UILabel *greenLabel;
@property (weak, nonatomic) IBOutlet UILabel *blueLabel;

- (IBAction)closeSettings:(id)sender;
- (IBAction)sliderChanged:(id)sender;

@end
