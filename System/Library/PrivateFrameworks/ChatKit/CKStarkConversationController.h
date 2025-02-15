//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, CPInterfaceController, CPListTemplate, CPSessionConfiguration, NSDateFormatter, NSString;

__attribute__((visibility("hidden")))
@interface CKStarkConversationController : NSObject
{
    CPInterfaceController *_interfaceController;	// 8 = 0x8
    CPListTemplate *_conversationListTemplate;	// 16 = 0x10
    NSDateFormatter *_dateFormatter;	// 24 = 0x18
    NSDateFormatter *_timeFormatter;	// 32 = 0x20
    CPSessionConfiguration *_sessionConfiguration;	// 40 = 0x28
    CNAvatarImageRenderer *_avatarImageRenderer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000141169
@property(retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // @synthesize avatarImageRenderer=_avatarImageRenderer;
@property(retain, nonatomic) CPSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSDateFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) CPListTemplate *conversationListTemplate; // @synthesize conversationListTemplate=_conversationListTemplate;
@property(retain, nonatomic) CPInterfaceController *interfaceController; // @synthesize interfaceController=_interfaceController;
- (void)_resortAndReloadData;	// IMP=0x0000000000140be5
- (void)sessionConfiguration:(id)arg1 contentStyleChanged:(unsigned long long)arg2;	// IMP=0x0000000000140af5
- (void)conversationListDidChange:(id)arg1;	// IMP=0x00000000001409de
- (void)templateWillAppear:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001408ee
- (id)initWithInterfaceController:(id)arg1;	// IMP=0x0000000000140582

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

