//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AAUIServerSuppliedProfilePictureCache : NSObject
{
    NSMutableDictionary *_personIDToEntryMap;	// 8 = 0x8
    double _pictureDiameter;	// 16 = 0x10
}

+ (id)sharedCache;	// IMP=0x0060000000003c70
- (void).cxx_destruct;	// IMP=0x0000000000004dc9
- (id)_entryForPersonID:(id)arg1;	// IMP=0x0000000000004c9b
- (_Bool)updateProfilePicture:(id)arg1 didReceiveNewPicture:(_Bool)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4;	// IMP=0x0000000000004849
- (void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000457f
- (id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004255
- (id)serverCacheTagForPersonID:(id)arg1 diameter:(double)arg2;	// IMP=0x0000000000004107
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1;	// IMP=0x0000000000003d75
@property(readonly, nonatomic) double pictureDiameter;
- (id)init;	// IMP=0x0000000000003cc5

@end
