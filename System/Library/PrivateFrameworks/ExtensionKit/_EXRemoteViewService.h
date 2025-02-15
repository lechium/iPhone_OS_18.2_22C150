//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewService.h>

@class NSUUID, _EXExtensionProcessHandle;

__attribute__((visibility("hidden")))
@interface _EXRemoteViewService : _UIRemoteViewService
{
    NSUUID *_contextToken;	// 8 = 0x8
    _EXExtensionProcessHandle *_extensionProcess;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e42a
@property(readonly) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
- (id)contextToken;	// IMP=0x000000000000e403
- (void)endUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e3f3
- (void)beginUsing:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e3e3
- (id)viewControllerClassName;	// IMP=0x000000000000e3ca
- (int)processIdentifier;	// IMP=0x000000000000e386
- (id)multipleInstancesUUID;	// IMP=0x000000000000e37e
- (_Bool)multipleInstances;	// IMP=0x000000000000e376
- (id)xpcServiceNameRoot;	// IMP=0x000000000000e2fc
- (id)identifier;	// IMP=0x000000000000e282
- (_Bool)overridesHostAppearance;	// IMP=0x000000000000e27a
- (id)initWithExtensionProcess:(id)arg1 contextToken:(id)arg2;	// IMP=0x000000000000e1d8

@end

