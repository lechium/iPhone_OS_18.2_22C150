//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFButtonItem-Protocol.h>

@class NSData, NSDictionary, SFAppAutoShortcutsItem;

@protocol SFAppAutoShortcutsButtonItem <SFButtonItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFAppAutoShortcutsItem *appAutoShortcutsItem;
@end
