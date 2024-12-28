//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PredictorUtils : NSObject
{
}

+ (id)getPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x0080000000025c23
+ (id)getInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x0080000000025aac
+ (void)reportPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;	// IMP=0x00800000000259b7
+ (void)reportInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;	// IMP=0x00800000000258c2
+ (long long)handlePredictException:(struct exception_ptr)arg1;	// IMP=0x008000000002562d
+ (long long)handleInitException:(struct exception_ptr)arg1;	// IMP=0x0080000000025442

@end
