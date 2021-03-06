/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, EDAlignmentInfo, EDFont, EDProtection, EDContentFormat, EDFill;



@interface EDDifferentialStyle : NSObject <NSCopying>
{
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
    EDContentFormat *mContentFormat;
}

+ (id)differentialStyle;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)alignmentInfo;
- (void)setAlignmentInfo:(id)arg1;
- (id)borders;
- (void)setBorders:(id)arg1;
- (id)fill;
- (void)setFill:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;
- (id)contentFormat;
- (void)setContentFormat:(id)arg1;

@end
