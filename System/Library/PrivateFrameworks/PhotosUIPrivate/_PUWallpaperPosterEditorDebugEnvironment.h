//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PFPosterConfiguration, PFPosterDescriptor, UIColor;
@protocol PUMutablePosterConfiguration, PUPosterOverrideConfiguration;

__attribute__((visibility("hidden")))
@interface _PUWallpaperPosterEditorDebugEnvironment : NSObject
{
    UIColor *_pu_caseColor;	// 8 = 0x8
    long long _pu_userInterfaceStyle;	// 16 = 0x10
    NSString *_pu_selectedToolbarItemIdentifier;	// 24 = 0x18
    PFPosterDescriptor *_posterDescriptor;	// 32 = 0x20
    PFPosterConfiguration *_sourcePosterConfiguration;	// 40 = 0x28
    NSURL *_sourceAssetDirectory;	// 48 = 0x30
    NSURL *_targetAssetDirectory;	// 56 = 0x38
    unsigned long long _legacyConfigurationType;	// 64 = 0x40
    id <PUPosterOverrideConfiguration> _overrideConfiguration;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000065730e
@property(retain, nonatomic) id <PUPosterOverrideConfiguration> overrideConfiguration; // @synthesize overrideConfiguration=_overrideConfiguration;
@property(nonatomic) unsigned long long legacyConfigurationType; // @synthesize legacyConfigurationType=_legacyConfigurationType;
@property(retain, nonatomic) NSURL *targetAssetDirectory; // @synthesize targetAssetDirectory=_targetAssetDirectory;
@property(retain, nonatomic) NSURL *sourceAssetDirectory; // @synthesize sourceAssetDirectory=_sourceAssetDirectory;
@property(retain, nonatomic) PFPosterConfiguration *sourcePosterConfiguration; // @synthesize sourcePosterConfiguration=_sourcePosterConfiguration;
@property(retain, nonatomic) PFPosterDescriptor *posterDescriptor; // @synthesize posterDescriptor=_posterDescriptor;
@property(retain, nonatomic) NSString *pu_selectedToolbarItemIdentifier; // @synthesize pu_selectedToolbarItemIdentifier=_pu_selectedToolbarItemIdentifier;
@property(nonatomic) long long pu_userInterfaceStyle; // @synthesize pu_userInterfaceStyle=_pu_userInterfaceStyle;
@property(retain, nonatomic) UIColor *pu_caseColor; // @synthesize pu_caseColor=_pu_caseColor;
- (struct CGRect)px_titleBoundsForLayout:(unsigned long long)arg1;	// IMP=0x000000000065720b
@property(readonly, nonatomic) long long pu_deviceOrientation;
@property(readonly, nonatomic) struct CGRect px_floatingObscurableBounds;
@property(readonly, nonatomic) long long px_boundingShape;
@property(readonly, nonatomic, getter=px_isCallServices) _Bool px_callServices;
@property(readonly, nonatomic) unsigned long long px_significantEventsCounter;
@property(readonly, nonatomic) id <PUMutablePosterConfiguration> pu_targetConfiguration;
@property(readonly, nonatomic) id <PUPosterOverrideConfiguration> pu_overrideConfiguration;
@property(readonly, nonatomic) unsigned long long pu_legacyConfigurationType;
@property(readonly, nonatomic) NSURL *pu_targetAssetDirectory;
@property(readonly, nonatomic) NSURL *pu_sourceAssetDirectory;
@property(readonly, nonatomic) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property(readonly, nonatomic) PFPosterDescriptor *pu_posterDescriptor;
@property(readonly, nonatomic) long long pu_posterType;
- (id)initWithSourcePosterConfiguration:(id)arg1;	// IMP=0x0000000000657041
- (id)initWithPosterDescriptor:(id)arg1;	// IMP=0x0000000000656fe7
- (id)init;	// IMP=0x0000000000656ee9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
