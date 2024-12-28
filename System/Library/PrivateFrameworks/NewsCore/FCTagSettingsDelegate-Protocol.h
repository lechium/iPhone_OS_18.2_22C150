//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCModifyTagSettingsCommand, NSString;

@protocol FCTagSettingsDelegate <NSObject>
- (void)accessTokenRemovedForTagID:(NSString *)arg1 userInitiated:(_Bool)arg2;
- (void)accessTokenDidChangeForTagID:(NSString *)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(FCModifyTagSettingsCommand *)arg1;
@end
