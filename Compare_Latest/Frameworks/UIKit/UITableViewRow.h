//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding>
{
    int _indentationLevel;
    UITableViewCell *_cell;
    float _height;
}

+ (id)row;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) float height; // @synthesize height=_height;
- (int)indentationLevel;
- (void)setIndentationLevel:(int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

