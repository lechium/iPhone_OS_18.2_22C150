//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAExtractablePassword;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeControllerOptions : NSObject
{
    _Bool _skipOldPasscode;	// 8 = 0x8
    _Bool _skipNewPasscode;	// 9 = 0x9
    _Bool _dismissUIAfterCompletion;	// 10 = 0xa
    LAExtractablePassword *_oldPasscode;	// 16 = 0x10
    LAExtractablePassword *_newPasscode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000021db9
@property(nonatomic) _Bool dismissUIAfterCompletion; // @synthesize dismissUIAfterCompletion=_dismissUIAfterCompletion;
@property(retain, nonatomic) LAExtractablePassword *newPasscode; // @synthesize newPasscode=_newPasscode;
@property(retain, nonatomic) LAExtractablePassword *oldPasscode; // @synthesize oldPasscode=_oldPasscode;
@property(nonatomic) _Bool skipNewPasscode; // @synthesize skipNewPasscode=_skipNewPasscode;
@property(nonatomic) _Bool skipOldPasscode; // @synthesize skipOldPasscode=_skipOldPasscode;

@end

