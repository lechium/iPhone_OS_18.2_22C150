//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC26SensitiveContentAnalysisML26SCMLTextModerationLMFromMM : NSObject
{
    MISSING_TYPE *session;	// 8 = 0x8
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000056590
- (id)init;	// IMP=0x0000000000056530
- (void)predictWithText:(NSString *)arg1 completionHandler:(void (^)(SCMLTextModerationLMResult *, NSError *))arg2;	// IMP=0x0000000000056320
- (id)initOnBehalfOf:(long long)arg1 modelManagerServicesUseCaseID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000055d30

@end

