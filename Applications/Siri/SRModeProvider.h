//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SASRequestOptions, SRModeSystemState;

@interface SRModeProvider : NSObject
{
    SRModeSystemState *_systemState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004219a
- (unsigned long long)internalModeOverride;	// IMP=0x0010000000041ffd
- (void)_setSystemState:(id)arg1;	// IMP=0x0010000000041fec
@property(retain, nonatomic) SASRequestOptions *requestOptions;
@property(nonatomic) _Bool userTouchedSnippet;
- (_Bool)displayOnlyModeForInterstitialsAndErrors;	// IMP=0x0010000000041c63
- (unsigned long long)_modeForSiriSettings;	// IMP=0x0010000000041bad
- (unsigned long long)currentMode;	// IMP=0x001000000004191a
- (MISSING_TYPE *)init;	// IMP=0x00100000000418c4

@end

