//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LAContext;

@protocol LAUIAuthentication
- (_Bool)disableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)enableMechanism:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isMechanismActive:(unsigned long long)arg1;
- (_Bool)isMechanismEnabled:(unsigned long long)arg1;
- (_Bool)isMechanismAvailable:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithMechanisms:(unsigned long long)arg1 context:(LAContext *)arg2;
- (id)initWithMechanisms:(unsigned long long)arg1;
@end
