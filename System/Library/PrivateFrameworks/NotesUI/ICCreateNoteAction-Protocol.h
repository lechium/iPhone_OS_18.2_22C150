//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSAttributedString, NSManagedObject, NSString;
@protocol ICSearchIndexableNote;

@protocol ICCreateNoteAction <NSObject>
- (NSManagedObject<ICSearchIndexableNote> *)performWithTitle:(NSString *)arg1 contents:(NSAttributedString *)arg2 error:(id *)arg3;
@end
