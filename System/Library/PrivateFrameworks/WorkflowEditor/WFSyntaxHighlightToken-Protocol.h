//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/JSExport-Protocol.h>

@class NSString, WFSyntaxHighlightToken;

@protocol WFSyntaxHighlightToken <JSExport>
+ (WFSyntaxHighlightToken *)constructToken;
@property int length;
@property int start;
@property(retain) NSString *string;
@property _Bool overflows;
@end

