//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INRegistrationRequest
{
    unsigned long long _registrationReason;	// 8 = 0x8
}

+ (id)bodyParameterValueForRegistrationReason:(unsigned long long)arg1;	// IMP=0x004000000000219f
+ (Class)responseClass;	// IMP=0x0010000000002137
@property(nonatomic) unsigned long long registrationReason; // @synthesize registrationReason=_registrationReason;
- (id)addBodyParameters:(id)arg1;	// IMP=0x00100000000021be
- (id)urlString;	// IMP=0x0010000000002148

@end

