//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSValue, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7MusicUI30JSUserSocialProfileCoordinator : NSObject
{
    MISSING_TYPE *userSocialProfileCoordinator;	// 8 = 0x8
    MISSING_TYPE *socialGraphController;	// 16 = 0x10
    MISSING_TYPE *objectGraph;	// 24 = 0x18
    MISSING_TYPE *pendingProfileFetch;	// 0 = 0x0
    MISSING_TYPE *pendingProfileFetchResolution;	// 0 = 0x0
    MISSING_TYPE *pendingIsCloudAndMediaAccountIdenticalFetch;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000004d367c
- (id)init;	// IMP=0x00000000004d3646
- (id)fetchIsCloudAndMediaAccountIdentical;	// IMP=0x00000000004d2970
- (id)fetchUserSocialProfile;	// IMP=0x00000000004d22a5
@property(nonatomic, readonly) JSValue *userProfile;

@end

