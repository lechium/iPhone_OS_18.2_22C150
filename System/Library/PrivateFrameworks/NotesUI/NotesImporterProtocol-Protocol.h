//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol NotesImporterProtocol
- (void)cleanupArchiveId:(NSString *)arg1 completionBlock:(void (^)(void))arg2;
- (void)unarchiveEvernoteResourceFromArchiveId:(NSString *)arg1 resourceArchiveId:(NSString *)arg2 completionBlock:(void (^)(ICEvernoteResource *))arg3;
- (void)unarchiveEvernoteNoteFromArchiveId:(NSString *)arg1 noteArchiveId:(NSString *)arg2 completionBlock:(void (^)(ICEvernoteNote *))arg3;
- (void)archiveEvernoteNotesFromBookmarkData:(NSData *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)parseTitleFromHTMLString:(NSString *)arg1 completionBlock:(void (^)(NSString *))arg2;
- (void)countEvernoteNotesFromBookmarkData:(NSData *)arg1 completionBlock:(void (^)(unsigned long long))arg2;
- (void)parseHTMLStringFromEvernoteContentString:(NSString *)arg1 completionBlock:(void (^)(NSString *))arg2;
@end

