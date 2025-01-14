//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSActionPickerItem.h"

@class LSAppLink, LSApplicationRecord, NSURL;
@protocol BCSCodePayload;

__attribute__((visibility("hidden")))
@interface BCSURLActionPickerItem : BCSActionPickerItem
{
    NSURL *_url;	// 8 = 0x8
    LSApplicationRecord *_applicationRecord;	// 16 = 0x10
    _Bool _preferApplicationIcon;	// 24 = 0x18
    LSAppLink *_appLink;	// 32 = 0x20
    id <BCSCodePayload> _codePayload;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000259e8
@property(readonly, nonatomic) id <BCSCodePayload> codePayload; // @synthesize codePayload=_codePayload;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (_Bool)useInlineMenu;	// IMP=0x0000000000025957
- (id)actionURL;	// IMP=0x000000000002590f
- (id)targetApplicationBundleIdentifier;	// IMP=0x0000000000025889
- (void)performAction;	// IMP=0x0000000000025875
- (void)performActionWithFBOptions:(id)arg1;	// IMP=0x0000000000025443
- (id)icon;	// IMP=0x000000000002530a
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 preferApplicationIcon:(_Bool)arg5;	// IMP=0x0000000000025203
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;	// IMP=0x00000000000251e1
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4;	// IMP=0x00000000000251bf
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4 preferApplicationIcon:(_Bool)arg5;	// IMP=0x00000000000250ee

@end

