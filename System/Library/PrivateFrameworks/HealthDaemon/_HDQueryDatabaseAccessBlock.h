//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDQueryServer, NSString;

__attribute__((visibility("hidden")))
@interface _HDQueryDatabaseAccessBlock : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    HDQueryServer *_queryServer;	// 16 = 0x10
    NSString *_processBundleIdentifier;	// 24 = 0x18
    long long _qualityOfService;	// 32 = 0x20
    double _creationTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000114416
- (id)description;	// IMP=0x00000000001142d7

@end

