//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNGeminiResult, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactGeminiIconProvider : NSObject
{
    CNGeminiResult *_geminiResult;	// 8 = 0x8
    NSDictionary *_geminiIconDictionary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013228f
@property(retain, nonatomic) NSDictionary *geminiIconDictionary; // @synthesize geminiIconDictionary=_geminiIconDictionary;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
- (id)_simLabelImageWithLocalizedBadgeLabel:(id)arg1;	// IMP=0x0000000000131de9
- (_Bool)_checkAvailableGeminiChannelsUpdatedForGeminiResult:(id)arg1;	// IMP=0x0000000000131a39
- (void)updateGeminiIcons;	// IMP=0x00000000001317b9
- (id)geminiIconForGeminiChannelIdentifier:(id)arg1;	// IMP=0x00000000001317a3

@end

