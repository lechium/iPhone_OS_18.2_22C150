//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class MRURoutingAccessoryView, MRURoutingSubtitleController, MRURoutingSubtitleView, MRUSlider, MRUVisualStylingProvider, MRUVolumeController, NSString, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MRURoutingTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingTableViewCell : UITableViewCell
{
    _Bool _isVendorSpecific;	// 8 = 0x8
    _Bool _showChevron;	// 9 = 0x9
    _Bool _showChevronExpanded;	// 10 = 0xa
    id <MRURoutingTableViewCellDelegate> _delegate;	// 16 = 0x10
    UIImage *_iconImage;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIImage *_protocolIcon;	// 40 = 0x28
    NSString *_protocolName;	// 48 = 0x30
    MRURoutingSubtitleController *_subtitleStateController;	// 56 = 0x38
    MRURoutingAccessoryView *_routingAccessoryView;	// 64 = 0x40
    MRUVolumeController *_volumeController;	// 72 = 0x48
    MRUVisualStylingProvider *_stylingProvider;	// 80 = 0x50
    UIImageView *_iconImageView;	// 88 = 0x58
    UIImageView *_outlineImageView;	// 96 = 0x60
    UILabel *_titleLabel;	// 104 = 0x68
    MRURoutingSubtitleView *_subtitleView;	// 112 = 0x70
    MRUSlider *_volumeSlider;	// 120 = 0x78
    UIView *_separatorView;	// 128 = 0x80
    UITapGestureRecognizer *_expandGestureRecognizer;	// 136 = 0x88
    struct UIEdgeInsets _contentEdgeInsets;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000010fcc5
@property(retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MRUSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(retain, nonatomic) MRURoutingSubtitleView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *outlineImageView; // @synthesize outlineImageView=_outlineImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showChevronExpanded; // @synthesize showChevronExpanded=_showChevronExpanded;
@property(nonatomic) _Bool showChevron; // @synthesize showChevron=_showChevron;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic) __weak MRUVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView; // @synthesize routingAccessoryView=_routingAccessoryView;
@property(readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController; // @synthesize subtitleStateController=_subtitleStateController;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(retain, nonatomic) UIImage *protocolIcon; // @synthesize protocolIcon=_protocolIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak id <MRURoutingTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isVendorSpecific; // @synthesize isVendorSpecific=_isVendorSpecific;
- (struct CGRect)expandRect;	// IMP=0x000000000010f710
- (void)updateVisibility;	// IMP=0x000000000010f62d
- (void)updateContentSizeCategory;	// IMP=0x000000000010f5d2
- (void)updateVisualStyling;	// IMP=0x000000000010f543
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x000000000010f32d
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000010f20c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000010f15b
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x000000000010f149
- (void)volumeControllerDidFinishEqualization:(id)arg1;	// IMP=0x000000000010f12a
- (void)volumeControllerWillBeginEqualization:(id)arg1;	// IMP=0x000000000010f108
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000000010f0da
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000000010f07f
- (void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 icon:(id)arg3 accessory:(long long)arg4;	// IMP=0x000000000010f00c
- (void)transitionToNextVisibleStateWithDuration:(double)arg1;	// IMP=0x000000000010ed38
- (void)sliderValueChanged:(id)arg1;	// IMP=0x000000000010ecb4
- (void)didTapToExpand;	// IMP=0x000000000010ec5d
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;	// IMP=0x000000000010ec0c
- (void)setSubtitleAccessory:(long long)arg1;	// IMP=0x000000000010e8c2
- (void)setIcon:(id)arg1;	// IMP=0x000000000010e889
- (void)setSubtitle:(id)arg1;	// IMP=0x000000000010e850
- (void)prepareForReuse;	// IMP=0x000000000010e65d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000010e518
- (void)layoutSubviews;	// IMP=0x000000000010d85c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000010d236

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
