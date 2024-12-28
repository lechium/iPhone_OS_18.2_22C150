//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, _UIAppearanceCustomizableClassInfo;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject
{
    NSArray *_containerList;	// 8 = 0x8
    NSMutableArray *_appearanceInvocations;	// 16 = 0x10
    NSMapTable *_invocationSources;	// 24 = 0x18
    _UIAppearanceCustomizableClassInfo *_customizableClassInfo;	// 32 = 0x20
}

+ (void)_setInvalidatesViewsOnAppearanceChange:(_Bool)arg1;	// IMP=0x0060000000ca6e96
+ (id)recursiveDescription;	// IMP=0x0060000000ca6c92
+ (void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3;	// IMP=0x0060000000ca69f0
+ (_Bool)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2;	// IMP=0x0060000000ca6233
+ (id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x0060000000ca54b6
+ (id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x0060000000ca546b
+ (id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2;	// IMP=0x0060000000ca5299
+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;	// IMP=0x0060000000ca5250
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2;	// IMP=0x0060000000ca51e3
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3;	// IMP=0x0060000000ca51ce
+ (void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(_Bool)arg4;	// IMP=0x0060000000ca3c6c
+ (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x0060000000ca3a7e
+ (_Bool)_hasAnyCustomizations;	// IMP=0x0060000000ca3a6d
+ (id)_rootAppearancesNode;	// IMP=0x0060000000ca3a31
+ (id)appearancesAtNode:(id)arg1 withObject:(id)arg2;	// IMP=0x0060000000ca33fc
+ (id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2;	// IMP=0x0060000000ca2f43
+ (id)_pendingRecordInvocationsForSource:(id)arg1;	// IMP=0x0060000000ca2ea9
+ (id)_recorderForSource:(id)arg1;	// IMP=0x0060000000ca2c83
+ (id)_windowsForSource:(id)arg1;	// IMP=0x0060000000ca2c6a
+ (void)_removeWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x0060000000ca2c2f
+ (void)_addWindow:(id)arg1 forSource:(id)arg2;	// IMP=0x0060000000ca2b97
+ (void)_setCurrentAppearanceSource:(id)arg1;	// IMP=0x0060000000ca2b61
+ (id)_currentAppearanceSource;	// IMP=0x0060000000ca2b54
@property(readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo; // @synthesize _customizableClassInfo;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;	// IMP=0x0000000000ca6433
- (id)description;	// IMP=0x0000000000ca63a0
- (void)_invalidateAppearanceInWindow:(id)arg1;	// IMP=0x0000000000ca61fe
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000ca61a0
- (void)_handleGetterInvocation:(id)arg1;	// IMP=0x0000000000ca5bf6
- (void)_handleSetterInvocation:(id)arg1;	// IMP=0x0000000000ca57e5
- (_Bool)_isRecordingInvocations;	// IMP=0x0000000000ca57d7
- (id)_traitCollection;	// IMP=0x0000000000ca57cf
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1;	// IMP=0x0000000000ca5576
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000ca5541
- (void)dealloc;	// IMP=0x0000000000ca51f8
- (void)_removeInvocationsForSource:(id)arg1;	// IMP=0x0000000000ca3b42
- (_Bool)_isValidAppearanceForCustomizableObject:(id)arg1;	// IMP=0x0000000000ca33f4
- (id)_appearanceInvocations;	// IMP=0x0000000000ca2b4a

@end
