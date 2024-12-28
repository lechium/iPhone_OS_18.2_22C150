//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, MKETAProvider, NSString, UIButton;
@protocol SARSearchResultTableViewCellDelegate;

@interface SARSearchResultTableViewCell
{
    id <SARSearchResultTableViewCellDelegate> _delegate;	// 232 = 0xe8
    BackgroundColorButton *_actionButton;	// 240 = 0xf0
    MKETAProvider *_etaProvider;	// 248 = 0xf8
    double _travelTime;	// 256 = 0x100
    UIButton *_addStopButton;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00200000009edc02
@property(retain, nonatomic) UIButton *addStopButton; // @synthesize addStopButton=_addStopButton;
@property(nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property(retain, nonatomic) MKETAProvider *etaProvider; // @synthesize etaProvider=_etaProvider;
@property(readonly, nonatomic) BackgroundColorButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <SARSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;	// IMP=0x00100000009eda85
- (void)_buttonAction;	// IMP=0x00100000009ed9e8
- (id)attributedSecondPartDetailString;	// IMP=0x00100000009ed702
- (id)attributedFirstPartDetailString;	// IMP=0x00100000009ed608
- (void)updateTheme;	// IMP=0x00100000009ed399
- (void)setupPlaceContextContent:(id)arg1;	// IMP=0x00100000009ed35f
- (double)trailingMargin;	// IMP=0x00100000009ed351
- (id)titleRegularFont;	// IMP=0x00100000009ed338
- (id)titleFont;	// IMP=0x00100000009ed31f
- (void)ETAProviderUpdated:(id)arg1;	// IMP=0x00100000009ed25e
- (id)attributedTitleString;	// IMP=0x00100000009ed0e1
- (void)didUpdateMapItem;	// IMP=0x00100000009ecef3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000009ec641

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
