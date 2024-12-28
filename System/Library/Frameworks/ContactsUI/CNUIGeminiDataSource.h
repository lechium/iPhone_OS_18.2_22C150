//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNGeminiManager, CNGeminiResult, NSString;
@protocol CNUIGeminiDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface CNUIGeminiDataSource : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    CNGeminiResult *_geminiResult;	// 16 = 0x10
    id <CNUIGeminiDataSourceDelegate> _delegate;	// 24 = 0x18
    CNGeminiManager *_geminiManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002e428e
@property(retain, nonatomic) CNGeminiManager *geminiManager; // @synthesize geminiManager=_geminiManager;
@property(nonatomic) __weak id <CNUIGeminiDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)channelsDidChangeForGeminiManager:(id)arg1;	// IMP=0x00000000002e4151
@property(readonly, nonatomic) NSString *channelIdentifier;
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000002e400e
- (void)resetDataSource;	// IMP=0x00000000002e3e91
- (id)initWithGeminiManager:(id)arg1;	// IMP=0x00000000002e3dad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
