//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CRCarKitServiceClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)serviceQueue;	// IMP=0x0060000000003aa6
- (void).cxx_destruct;	// IMP=0x0000000000004167
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)performServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004045
- (void)_serviceQueuePerformBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003e94
- (void)performSynchronousServiceBlock:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d4a
- (void)dealloc;	// IMP=0x0000000000003cdf
- (void)_setupConnection;	// IMP=0x0000000000003b75
- (id)init;	// IMP=0x0000000000003b29

@end

