//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKCASatoriReporter, AKClient;

@interface AKSatoriController : NSObject
{
    AKClient *_client;	// 8 = 0x8
    AKCASatoriReporter *_analyticsReport;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001e48c
@property(retain, nonatomic) AKCASatoriReporter *analyticsReport; // @synthesize analyticsReport=_analyticsReport;
- (void)fetchRealUserLikelihoodForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e404
- (void)warmUpVerificationSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e391
- (id)initWithClient:(id)arg1;	// IMP=0x001000000001e326

@end

