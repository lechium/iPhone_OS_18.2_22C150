//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPModelTrainingDelegate : NSObject
{
    CDUnknownBlockType _logHandler;	// 8 = 0x8
    _Bool _stop;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ff41
- (_Bool)modelTrainerShouldStop:(id)arg1;	// IMP=0x000000000002ff38
- (void)modelTrainer:(id)arg1 logMessage:(id)arg2;	// IMP=0x000000000002feb7
- (id)initWithLogHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fe47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
