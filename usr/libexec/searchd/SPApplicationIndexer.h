//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface SPApplicationIndexer : NSObject
{
    int _changedToken;	// 8 = 0x8
    NSMutableSet *_pendingUpdates;	// 16 = 0x10
}

+ (id)attributeSetForApp;	// IMP=0x00400000000286c9
+ (id)sharedIndexer;	// IMP=0x00100000000284b4
- (void).cxx_destruct;	// IMP=0x0020000000033c27
@property(retain, nonatomic) NSMutableSet *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(readonly) int changedToken; // @synthesize changedToken=_changedToken;
- (void)updateApplications:(id)arg1 appBundleArray:(id)arg2 clean:(_Bool)arg3 activity:(id)arg4;	// IMP=0x0010000000031f27
- (void)updateShortcuts:(id)arg1;	// IMP=0x0010000000030a11
- (void)updateApplicationInformationForExistingItems:(id)arg1 reimportItems:(id)arg2 newItems:(id)arg3 countItems:(id)arg4 updateCountItems:(id)arg5 clean:(_Bool)arg6 activity:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x001000000002e61a
- (void)updateApplicationMetadata:(id)arg1 appsRequiringLocalization:(id)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002e3c6
- (void)_updateAppMetadata:(id)arg1 appsRequiringLocalization:(id)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d17f
- (id)_updateItem:(id)arg1 forIdentifier:(id)arg2 withLaunchCounts:(id)arg3 requiresLocalizationInfo:(_Bool)arg4;	// IMP=0x001000000002a931
- (void)addDefaultBundleInformationForURL:(id)arg1 attrSet:(id)arg2 altNames:(id)arg3 namesOnly:(_Bool)arg4 withApp:(id)arg5 enName:(id)arg6;	// IMP=0x0010000000028bf2
- (void)start;	// IMP=0x0010000000028be1
- (void)dealloc;	// IMP=0x0010000000028ba8
- (id)init;	// IMP=0x0010000000028871

@end

