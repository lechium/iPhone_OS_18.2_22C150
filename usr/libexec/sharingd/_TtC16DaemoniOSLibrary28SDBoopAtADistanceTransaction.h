//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSError, NSUUID;

@interface _TtC16DaemoniOSLibrary28SDBoopAtADistanceTransaction : NSObject
{
    MISSING_TYPE *inner;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000002ae110
- (id)init;	// IMP=0x00100000002ae0b0
@property(nonatomic, readonly) _Bool isInitiator;
@property(nonatomic, readonly) NSError *error;
@property(nonatomic, readonly) NSDate *connectionDate;
@property(nonatomic, readonly) NSUUID *identifier;

@end

