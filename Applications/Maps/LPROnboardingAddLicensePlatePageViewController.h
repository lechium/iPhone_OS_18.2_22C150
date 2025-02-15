//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOLPRRegion, GEOLPRRoot, NSArray, NSMutableDictionary, NSString, UIButton, UIPickerView, UIScrollView, UITextField, UIView, VGVehicle;
@protocol LPROnboardingDelegate;

@interface LPROnboardingAddLicensePlatePageViewController
{
    long long _scenario;	// 8 = 0x8
    _Bool _isAddingVehicle;	// 16 = 0x10
    _Bool _isSubmittingLicensePlate;	// 17 = 0x11
    UIScrollView *_scrollView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    id <LPROnboardingDelegate> _delegate;	// 40 = 0x28
    NSString *_regionCode;	// 48 = 0x30
    NSMutableDictionary *_powerTypes;	// 56 = 0x38
    NSArray *_powerTypesKey;	// 64 = 0x40
    UIPickerView *_powerPicker;	// 72 = 0x48
    UIButton *_powerButton;	// 80 = 0x50
    UITextField *_licensePlateTextField;	// 88 = 0x58
    unsigned long long _selectedPowerType;	// 96 = 0x60
    VGVehicle *_vehicle;	// 104 = 0x68
    GEOLPRRegion *_currentRegion;	// 112 = 0x70
    GEOLPRRoot *_lprRules;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000059f1de
@property(retain, nonatomic) GEOLPRRoot *lprRules; // @synthesize lprRules=_lprRules;
@property(retain, nonatomic) GEOLPRRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(retain, nonatomic) VGVehicle *vehicle; // @synthesize vehicle=_vehicle;
@property(nonatomic) unsigned long long selectedPowerType; // @synthesize selectedPowerType=_selectedPowerType;
@property(retain, nonatomic) UITextField *licensePlateTextField; // @synthesize licensePlateTextField=_licensePlateTextField;
@property(retain, nonatomic) UIButton *powerButton; // @synthesize powerButton=_powerButton;
@property(retain, nonatomic) UIPickerView *powerPicker; // @synthesize powerPicker=_powerPicker;
@property(retain, nonatomic) NSArray *powerTypesKey; // @synthesize powerTypesKey=_powerTypesKey;
@property(retain, nonatomic) NSMutableDictionary *powerTypes; // @synthesize powerTypes=_powerTypes;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x001000000059ee86
- (void)nextButtonPressed;	// IMP=0x001000000059eaff
- (_Bool)plateIsValid:(id)arg1;	// IMP=0x001000000059e54d
- (id)licensePlateRules;	// IMP=0x001000000059e3cf
- (void)_didEditTextField:(id)arg1;	// IMP=0x001000000059e31f
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x001000000059e1f8
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x001000000059e1ea
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;	// IMP=0x001000000059e0ea
- (id)_powerTitleAtRow:(long long)arg1;	// IMP=0x001000000059dfd9
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x001000000059dfc4
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x001000000059df80
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x001000000059df75
- (void)handleSingleTap:(id)arg1;	// IMP=0x001000000059df33
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000059de89
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000059dd67
- (void)viewDidLoad;	// IMP=0x001000000059ad20
- (id)initWithScenario:(long long)arg1 vehicle:(id)arg2 delegate:(id)arg3 region:(id)arg4 lprRules:(id)arg5 powerTypes:(id)arg6;	// IMP=0x001000000059ab39

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

