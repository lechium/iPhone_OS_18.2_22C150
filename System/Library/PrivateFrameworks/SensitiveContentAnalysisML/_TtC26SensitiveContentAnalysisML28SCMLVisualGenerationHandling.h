//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC26SensitiveContentAnalysisML28SCMLVisualGenerationHandling : NSObject
{
    MISSING_TYPE *tokenGen;	// 8 = 0x8
    MISSING_TYPE *logger;	// 4282511241 = 0xff41ef89
}

+ (_Bool)allowImplicitDetections;	// IMP=0x00400000000608c0
- (void).cxx_destruct;	// IMP=0x00000000000628c0
- (id)init;	// IMP=0x0000000000062840
- (void)predictWithText:(NSString *)arg1 completionHandler:(void (^)(_TtC26SensitiveContentAnalysisML34SCMLVisualGenerationHandlingResult *, NSError *))arg2;	// IMP=0x0000000000062650
- (id)initOnBehalfOf:(long long)arg1 modelManagerServicesUseCaseID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000060f90

@end

