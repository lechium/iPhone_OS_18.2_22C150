//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSValue, SCATMenu;
@protocol SCATPointPickerDelegate, SCATPointPickerVisualProvider;

@interface SCATPointPicker
{
    _Bool _shouldKeepScannerAwake;	// 8 = 0x8
    unsigned int _currentDisplayID;	// 12 = 0xc
    id <SCATPointPickerDelegate> _delegate;	// 16 = 0x10
    NSValue *_realPickedPoint;	// 24 = 0x18
    unsigned long long _refinementCount;	// 32 = 0x20
    long long _pickerType;	// 40 = 0x28
    SCATMenu *_menu;	// 48 = 0x30
    struct CGPoint _lastReceivedPoint;	// 56 = 0x38
}

+ (id)pointPickerWithMode:(long long)arg1 menu:(id)arg2;	// IMP=0x00400000000fbb02
+ (id)mostSuitablePointPickerWithMenu:(id)arg1;	// IMP=0x00100000000fba70
- (void).cxx_destruct;	// IMP=0x00200000000fc171
@property(nonatomic) __weak SCATMenu *menu; // @synthesize menu=_menu;
@property(nonatomic) unsigned int currentDisplayID; // @synthesize currentDisplayID=_currentDisplayID;
@property(nonatomic) struct CGPoint lastReceivedPoint; // @synthesize lastReceivedPoint=_lastReceivedPoint;
@property(readonly, nonatomic) long long pickerType; // @synthesize pickerType=_pickerType;
@property(nonatomic) _Bool shouldKeepScannerAwake; // @synthesize shouldKeepScannerAwake=_shouldKeepScannerAwake;
@property(nonatomic) unsigned long long refinementCount; // @synthesize refinementCount=_refinementCount;
@property(retain, nonatomic) NSValue *realPickedPoint; // @synthesize realPickedPoint=_realPickedPoint;
@property(nonatomic) __weak id <SCATPointPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x00100000000fc031
- (void)scannerManager:(id)arg1 didActivateElement:(id)arg2;	// IMP=0x00100000000fc01a
- (_Bool)shouldRescanAfterTap;	// IMP=0x00100000000fc012
- (void)resetRefinedSelectedPoint;	// IMP=0x00100000000fbffd
- (void)refineSelectedPoint;	// IMP=0x00100000000fbfae
- (id)identifier;	// IMP=0x00100000000fbf9a
@property(readonly, nonatomic) _Bool allowsSelectionRefinement;
@property(readonly, nonatomic) struct CGPoint pickedPointInDeviceCoordinates;
@property(readonly, nonatomic) struct CGPoint pickedPoint;
@property(readonly, nonatomic) _Bool hasPickedPoint;
- (_Bool)isRefiningPoint;	// IMP=0x00100000000fbe34
- (void)moveToPoint:(struct CGPoint)arg1;	// IMP=0x00100000000fbe22
- (void)_savePoint:(struct CGPoint)arg1 andNotifyDelegate:(_Bool)arg2;	// IMP=0x00100000000fbd30
- (id)description;	// IMP=0x00100000000fbbd6
- (id)_initWithMenu:(id)arg1;	// IMP=0x00100000000fbb60

// Remaining properties
@property(retain, nonatomic) id <SCATPointPickerVisualProvider> visualProvider; // @dynamic visualProvider;

@end
