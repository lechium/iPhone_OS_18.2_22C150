//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

@interface _TtC9appstored10CrashEvent : NSObject
{
    MISSING_TYPE *appVersion;	// 8 = 0x8
    MISSING_TYPE *bundleID;	// 24 = 0x18
    MISSING_TYPE *bundleVersion;	// 40 = 0x28
    MISSING_TYPE *date;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *incidentID;	// 0 = 0x0
    MISSING_TYPE *isBeta;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *isSystem;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000061a60
- (id)init;	// IMP=0x00100000000619e0
@property(nonatomic, readonly) _Bool isSystem; // @synthesize isSystem;
@property(nonatomic, readonly) _Bool isBeta; // @synthesize isBeta;
@property(nonatomic, readonly) NSString *incidentID;
@property(nonatomic, readonly) NSDate *date;
@property(nonatomic, readonly) NSString *bundleVersion;
@property(nonatomic, readonly) NSString *bundleID;
@property(nonatomic, readonly) NSString *appVersion;

@end

