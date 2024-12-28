//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VOTElement;
@protocol VOTRotorDelegate;

@interface VOTRotor : NSObject
{
    NSString *_typeKey;	// 8 = 0x8
    struct __CFArray *_currentRotors;	// 16 = 0x10
    long long _currentRotorType;	// 24 = 0x18
    long long _currentSelectionRotorType;	// 32 = 0x20
    NSArray *_customRotorActionCategories;	// 40 = 0x28
    NSArray *_customContent;	// 48 = 0x30
    long long _customContentIndex;	// 56 = 0x38
    long long _publicCustomRotorIndex;	// 64 = 0x40
    NSMutableArray *_customPublicRotors;	// 72 = 0x48
    long long _customRotorIndex;	// 80 = 0x50
    long long _previousRotorType;	// 88 = 0x58
    VOTElement *_currentRotorElement;	// 96 = 0x60
    id <VOTRotorDelegate> _delegate;	// 104 = 0x68
    long long _customActionIndex;	// 112 = 0x70
}

+ (_Bool)rotorIsUsedForSettingAdjustment:(long long)arg1;	// IMP=0x0040000000133668
+ (id)stringForRotorType:(long long)arg1;	// IMP=0x00100000001329e1
+ (id)rotorTypeForPreferenceString:(id)arg1;	// IMP=0x0010000000131d9d
+ (long long)rotorTypeForSystemRotorType:(id)arg1;	// IMP=0x00100000001319be
+ (long long)rotorTypeForSearchType:(long long)arg1;	// IMP=0x0010000000131964
+ (id)systemRotorTypeForRotorType:(long long)arg1;	// IMP=0x0010000000131795
+ (id)systemRotorTypeForSearchType:(long long)arg1;	// IMP=0x0010000000131776
- (void).cxx_destruct;	// IMP=0x002000000013387a
@property(nonatomic) long long customActionIndex; // @synthesize customActionIndex=_customActionIndex;
@property(readonly, nonatomic) long long publicCustomRotorIndex; // @synthesize publicCustomRotorIndex=_publicCustomRotorIndex;
@property(nonatomic) __weak id <VOTRotorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak VOTElement *currentRotorElement; // @synthesize currentRotorElement=_currentRotorElement;
@property(readonly, nonatomic) long long customRotorIndex; // @synthesize customRotorIndex=_customRotorIndex;
- (void)setRotorItems:(id)arg1;	// IMP=0x00100000001335df
- (id)rotorItems;	// IMP=0x001000000013356b
- (id)currentRotorString;	// IMP=0x0010000000133501
- (id)currentRotorHint;	// IMP=0x00100000001334af
- (_Bool)inMisspelledWordRotor;	// IMP=0x001000000013324d
- (id)_currentCustomRotorString;	// IMP=0x0010000000133024
- (long long)indexOfRotorItem:(long long)arg1;	// IMP=0x0010000000131d4d
- (void)clearRotorTypes;	// IMP=0x0010000000131d40
- (_Bool)verifyNoDuplicatesInRotor;	// IMP=0x0010000000131cbf
- (id)currentVisualRotorString;	// IMP=0x0010000000131c55
- (void)incrementDetectionRotor:(long long)arg1;	// IMP=0x00100000001315cb
- (void)decrement:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x00100000001315ae
- (void)increment:(_Bool *)arg1 userInitiated:(_Bool)arg2 eventOrigin:(long long)arg3;	// IMP=0x001000000013158e
- (void)_moveRotor:(_Bool)arg1 didWrap:(_Bool *)arg2 userInitiated:(_Bool)arg3 eventOrigin:(long long)arg4;	// IMP=0x0010000000131104
- (id)customPublicRotors;	// IMP=0x00100000001310f6
- (_Bool)rotorTypeIsValid:(long long)arg1 eventOrigin:(long long)arg2;	// IMP=0x00100000001310ea
@property(readonly, nonatomic) long long previousRotorType; // @synthesize previousRotorType=_previousRotorType;
@property(readonly, nonatomic) long long currentRotorType; // @synthesize currentRotorType=_currentRotorType;
@property(readonly, nonatomic) long long currentSelectionRotorType; // @dynamic currentSelectionRotorType;
- (void)setCurrentRotorType:(long long)arg1 saveToPreferences:(_Bool)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000130d3c
- (id)generateRotorTypeRequest;	// IMP=0x0010000000130bb4
@property(readonly, nonatomic) long long rotorIndex; // @dynamic rotorIndex;
@property(readonly, nonatomic) long long rotorCount; // @dynamic rotorCount;
- (void)dealloc;	// IMP=0x0010000000130b0e
- (id)init;	// IMP=0x0010000000130a94

@end
