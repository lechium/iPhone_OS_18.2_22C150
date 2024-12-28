//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsThemeImageView, MapsThemeLabel, NSString, UIView, WeatherConditions, WeatherLocationDataProvider, _TtC4Maps29WeatherConditionsDataProvider;
@protocol WeatherConditionsViewControllerDelegate;

@interface WeatherConditionsViewController
{
    _TtC4Maps29WeatherConditionsDataProvider *_weatherConditionsDataProvider;	// 8 = 0x8
    WeatherLocationDataProvider *_weatherLocationDataProvider;	// 16 = 0x10
    id <WeatherConditionsViewControllerDelegate> _delegate;	// 24 = 0x18
    WeatherConditions *_weatherConditions;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    MapsThemeImageView *_imageView;	// 48 = 0x30
    MapsThemeLabel *_titleLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a47212
@property(retain, nonatomic) MapsThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MapsThemeImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) WeatherConditions *weatherConditions; // @synthesize weatherConditions=_weatherConditions;
@property(nonatomic) __weak id <WeatherConditionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_titleFont;	// IMP=0x0010000000a470cb
- (void)_updateSubviews;	// IMP=0x0010000000a46f87
- (void)_setupConstraints;	// IMP=0x0010000000a46650
- (void)_createSubviews;	// IMP=0x0010000000a45eea
- (_Bool)_shouldShowWeatherConditions;	// IMP=0x0010000000a45e84
- (void)weatherConditionsDataProviderDidChangeWeatherConditions:(id)arg1;	// IMP=0x0010000000a45e72
- (void)_toggleWeatherConditionsVisibility;	// IMP=0x0010000000a45e3c
- (void)_preferredContentSizeChanged:(id)arg1;	// IMP=0x0010000000a45e2a
- (void)clearSavedLocation;	// IMP=0x0010000000a45de2
- (void)viewDidLoad;	// IMP=0x0010000000a45cb1
- (void)loadView;	// IMP=0x0010000000a45c08
- (void)setWeatherConditions:(id)arg1;	// IMP=0x0010000000a45b8b
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a45af2
- (void)setVisible:(_Bool)arg1;	// IMP=0x0010000000a45ade
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (id)initWithWeatherLocationDataProvider:(id)arg1;	// IMP=0x0010000000a459bb
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000a459b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
