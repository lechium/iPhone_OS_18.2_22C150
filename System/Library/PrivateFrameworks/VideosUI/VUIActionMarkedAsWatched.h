//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIActionMarkedAsWatched
{
    NSString *_itemID;	// 8 = 0x8
    NSString *_itemType;	// 16 = 0x10
    NSString *_adamID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021ac70
@property(retain, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021ab0e
- (id)initWithContextData:(id)arg1;	// IMP=0x000000000021aa16

@end
