/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeypad : SBDeviceLockTitle {
	BOOL _highlighted;	// 56 = 0x38
	UILabel *_titleLabel;	// 60 = 0x3c
	UILabel *_subtitleLabel;	// 64 = 0x40
}
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0xf0ad5; S=0xf10d5; converted property
@property(retain) id title;	// G=0xf10b5; S=0xf1091; converted property
@property(retain) id subtitle;	// G=0xf1071; S=0xf1035; converted property
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0xf1261
- (void)dealloc;	// 0xf0f99
- (void)layoutSubviews;	// 0xf1191
- (id)_backgroundImage;	// 0xf1141
// converted property getter: - (BOOL)isHighlighted;	// 0xf0ad5
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0xf10d5
// converted property getter: - (id)title;	// 0xf10b5
// converted property setter: - (void)setTitle:(id)title;	// 0xf1091
// converted property getter: - (id)subtitle;	// 0xf1071
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0xf1035
- (void)blinkSubtitle;	// 0xf0ff9
@end

