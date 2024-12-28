//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSXPCConnection;

@interface VCPMADRemoteActivityTask : VCPMABaseTask
{
    unsigned long long _activityType;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
}

+ (id)taskWithActivityType:(unsigned long long)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0020000000126ab3
- (void).cxx_destruct;	// IMP=0x0020000000128220
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000126f46
- (void)updateProgress:(double)arg1;	// IMP=0x0010000000126e46
- (id)connection;	// IMP=0x0010000000126b3e
- (id)initWithActivityType:(unsigned long long)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000126982

@end
