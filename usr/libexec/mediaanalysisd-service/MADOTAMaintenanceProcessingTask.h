//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@interface MADOTAMaintenanceProcessingTask : VCPMABaseTask
{
    CDUnknownBlockType _progressHandler;	// 8 = 0x8
}

+ (id)taskWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000180cb9
- (void).cxx_destruct;	// IMP=0x002000000018144a
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000180d69
- (id)initWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000180b1e

@end

