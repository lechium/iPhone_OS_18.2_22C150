//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APMediaServiceResponseTranslator : NSObject
{
}

+ (id)_translateAdResult:(id)arg1 contextID:(id)arg2 iAdID:(id)arg3;	// IMP=0x00400000001695bd
+ (_Bool)checkForNonWKDiscardOverrides:(_Bool)arg1 forAdamID:(id)arg2;	// IMP=0x0010000000169391
+ (id)_translateAd:(id)arg1 contextID:(id)arg2 iAdID:(id)arg3 placement:(unsigned long long)arg4;	// IMP=0x0010000000168799
+ (id)_translateMediaApiResponseToAds:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000168683
+ (id)translateResponse:(id)arg1 requestParams:(id)arg2 responseReceivedTimestamp:(double)arg3 error:(id *)arg4;	// IMP=0x0010000000167d24

@end

