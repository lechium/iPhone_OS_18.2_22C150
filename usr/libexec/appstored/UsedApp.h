//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface UsedApp : NSObject
{
    unsigned char _launchEventSource;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSDate *_lastExtensionLaunched;	// 24 = 0x18
    NSDate *_lastLaunched;	// 32 = 0x20
    long long _usageWindowMatchType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d0d1b
- (id)description;	// IMP=0x00100000000d0c79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d0be2

@end
