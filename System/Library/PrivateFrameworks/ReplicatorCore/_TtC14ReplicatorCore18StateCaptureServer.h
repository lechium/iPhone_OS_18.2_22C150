//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC14ReplicatorCore18StateCaptureServer : NSObject
{
    MISSING_TYPE *requestProcessingQueue;	// 8 = 0x8
    MISSING_TYPE *stateCaptureManager;	// 16 = 0x10
    MISSING_TYPE *listener;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000795e0
- (id)init;	// IMP=0x0000000000079580
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000079500
- (id)dataPathAndReturnError:(id *)arg1;	// IMP=0x0000000000079d90
- (id)stateFor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000079cb0

@end
