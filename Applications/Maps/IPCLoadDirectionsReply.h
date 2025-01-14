//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface IPCLoadDirectionsReply
{
    unsigned long long _navigationState;	// 8 = 0x8
    unsigned long long _safetyWarningType;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000042bb88
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long safetyWarningType; // @synthesize safetyWarningType=_safetyWarningType;
@property(nonatomic) unsigned long long navigationState; // @synthesize navigationState=_navigationState;
- (id)description;	// IMP=0x001000000042ba73
- (id)dictionaryValue;	// IMP=0x001000000042b8d3
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000042b74e

@end

