//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSPayloadMessageStatsCount : NSObject
{
    struct {
        double interval;
        unsigned char count;
        unsigned short *data;
    } _buckets[2];	// 8 = 0x8
    unsigned long long _count;	// 56 = 0x38
    double _lastMessageTime;	// 64 = 0x40
    NSString *_lastMessageTopic;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000087d91
@property(retain, nonatomic) NSString *lastMessageTopic; // @synthesize lastMessageTopic=_lastMessageTopic;
@property(nonatomic) double lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (unsigned long long)sumOfBucketType:(unsigned char)arg1;	// IMP=0x0010000000087d1a
- (void)countTopic:(id)arg1 now:(double)arg2;	// IMP=0x0010000000087cb4
- (void)shiftBucketsBasedOnNow:(double)arg1;	// IMP=0x0010000000087bd2
- (void)dealloc;	// IMP=0x0010000000087b93
- (id)init;	// IMP=0x0010000000087b00

@end

