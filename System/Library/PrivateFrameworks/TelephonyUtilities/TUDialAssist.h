//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TUDialAssist : NSObject
{
    int _dialAssistUserSettingsChangedToken;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000002b988
@property(readonly, nonatomic) int dialAssistUserSettingsChangedToken; // @synthesize dialAssistUserSettingsChangedToken=_dialAssistUserSettingsChangedToken;
- (void)dealloc;	// IMP=0x000000000002bad6
- (id)init;	// IMP=0x000000000002b9dd

@end
