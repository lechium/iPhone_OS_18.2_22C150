//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC13PhotoAnalysis15ServiceProvider : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *serviceCreationTaskByDescription;	// 112 = 0x70
    MISSING_TYPE *connection;	// 120 = 0x78
    MISSING_TYPE *executive;	// 128 = 0x80
    MISSING_TYPE *clientBundleID;	// 136 = 0x88
    MISSING_TYPE *clientDescription;	// 152 = 0x98
    MISSING_TYPE *client;	// 168 = 0xa8
    MISSING_TYPE *identifier;	// 176 = 0xb0
    MISSING_TYPE *logger;	// 2147484672 = 0x80000400
    MISSING_TYPE *stateHolder;	// 0 = 0x0
}

- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x0000000000034bf0
- (void)wallpaperServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000034350
- (void)executiveServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033ff0
- (void)testServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033ca0
- (void)momentGraphServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000336f0
- (void)photoLibraryServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032f70
- (void)legacyStorytellingServiceAt:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000328a0

@end

